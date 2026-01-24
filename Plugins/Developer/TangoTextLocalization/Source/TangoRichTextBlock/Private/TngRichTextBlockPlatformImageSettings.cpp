#include "TngRichTextBlockPlatformImageSettings.h"

UTngRichTextBlockPlatformImageSettings::UTngRichTextBlockPlatformImageSettings() {
    this->ImageSets.AddDefaulted(2);
    this->ImageSetsForCook.AddDefaulted(3);
    this->ImageSetTypeNames.AddDefaulted(2);
    this->ImageSetTypeNameForKeyboardMouse = TEXT("PC");
    this->CachedImageSets.AddDefaulted(2);
}


