#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsWallPaintingWidget.generated.h"

class UAkAudioEvent;
class UHbkAchievementsWallPaintingCharacterWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsWallPaintingWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShowCharacterPartsSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMax;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UHbkAchievementsWallPaintingCharacterWidget*> CharacterList;
    
public:
    UHbkAchievementsWallPaintingWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateDisplay();
    
    UFUNCTION(BlueprintCallable)
    void CreateCharacterList(const TMap<FName, UHbkAchievementsWallPaintingCharacterWidget*>& List);
    
};

