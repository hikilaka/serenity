/*
 * Copyright (c) 2021, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/DOM/Document.h>
#include <LibWeb/DOM/ProcessingInstruction.h>
#include <LibWeb/Layout/TextNode.h>

namespace Web::DOM {

ProcessingInstruction::ProcessingInstruction(Document& document, DeprecatedString const& data, DeprecatedString const& target)
    : CharacterData(document, NodeType::PROCESSING_INSTRUCTION_NODE, data)
    , m_target(target)
{
}

JS::ThrowCompletionOr<void> ProcessingInstruction::initialize(JS::Realm& realm)
{
    MUST_OR_THROW_OOM(Base::initialize(realm));
    set_prototype(&Bindings::ensure_web_prototype<Bindings::ProcessingInstructionPrototype>(realm, "ProcessingInstruction"));

    return {};
}

}
