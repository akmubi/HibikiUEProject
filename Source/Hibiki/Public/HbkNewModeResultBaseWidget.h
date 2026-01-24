#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTowerResultWidget.h"
#include "HbkNewModeResultBaseWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHbkNewModeResultBaseWidget : public UHbkRhythmTowerResultWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ClearBackground;
    
public:
    UHbkNewModeResultBaseWidget();

};

