#include "TngRichTextBlock.h"

UTngRichTextBlock::UTngRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->bDecorateImageHidden = false;
    this->bUseOverrideTextStyle = false;
    this->OverrideFontSize = 32;
    this->OverrideFontLetterSpacing = 0;
    this->OverrideFontOutlineSize = 0;
    this->bOverrideFontSeparateFillAlpha = false;
    this->bOverrideFontOutlineToDropShadows = false;
    this->bUseOverrideImageStyle = false;
    this->OverrideMaxAddedImages = 2;
    this->OverrideImageStretch = EStretch::Fill;
    this->OverrideImageBaselineOffset = 0;
}


