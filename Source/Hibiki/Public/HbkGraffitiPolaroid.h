#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkGraffitiPolaroidVisibilityParam.h"
#include "HbkGraffitiPolaroid.generated.h"

class UHbkGraffitiCollectSettingsDataAsset;

UCLASS(Blueprintable)
class AHbkGraffitiPolaroid : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGraffitiCollectSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingsDataTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGraffitiPolaroidVisibilityParam> VisibilityParams;
    
public:
    AHbkGraffitiPolaroid(const FObjectInitializer& ObjectInitializer);

};

