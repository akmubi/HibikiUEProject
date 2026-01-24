#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkAchievementsWallPaintingCharacterWidget.generated.h"

class UHbkAchievementsWallPaintingCharacterPartsWidget;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAchievementsWallPaintingCharacterWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Base;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkAchievementsWallPaintingCharacterPartsWidget*> PartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> BaseList;
    
public:
    UHbkAchievementsWallPaintingCharacterWidget();

    UFUNCTION(BlueprintCallable)
    void SetBaseList(TArray<UImage*> List);
    
    UFUNCTION(BlueprintCallable)
    void CreatePartsList(TArray<UHbkAchievementsWallPaintingCharacterPartsWidget*> List);
    
};

