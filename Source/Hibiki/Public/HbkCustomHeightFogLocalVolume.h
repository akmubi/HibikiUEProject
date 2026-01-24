#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Volume.h"
#include "HbkCustomHeightFogLocalVolume.generated.h"

UCLASS(Blueprintable)
class AHbkCustomHeightFogLocalVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CustomHeightFogTableRowHandle;
    
    AHbkCustomHeightFogLocalVolume(const FObjectInitializer& ObjectInitializer);

};

