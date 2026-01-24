#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "HbkMGRhythmTower_MenuAsset.generated.h"

class UHbkRhythmTowerStartWidget;

UCLASS(Blueprintable)
class UHbkMGRhythmTower_MenuAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmTowerStartWidget> StartWidgetClass;
    
    UHbkMGRhythmTower_MenuAsset();

};

