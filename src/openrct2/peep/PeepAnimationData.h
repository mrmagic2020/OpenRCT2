#pragma once

#include "../entity/Peep.h"
#include "../util/Util.h"
#include "PeepAnimations.h"

#include <span>

namespace OpenRCT2
{
    const PeepAnimation& GetPeepAnimation(
        PeepAnimationGroup spriteType, PeepAnimationType actionAnimationGroup = PeepAnimationType::Walking);
    const SpriteBounds& GetSpriteBounds(
        PeepAnimationGroup spriteType, PeepAnimationType actionAnimationGroup = PeepAnimationType::Walking);

    void inferMaxPeepSpriteDimensions();
} // namespace OpenRCT2
