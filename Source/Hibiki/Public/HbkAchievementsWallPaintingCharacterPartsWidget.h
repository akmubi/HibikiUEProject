#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsWallPaintingCharacterPartsWidget.generated.h"

class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsWallPaintingCharacterPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PartsIllustTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PartsIllust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AppearAnimation;
    
public:
    UHbkAchievementsWallPaintingCharacterPartsWidget();

};

