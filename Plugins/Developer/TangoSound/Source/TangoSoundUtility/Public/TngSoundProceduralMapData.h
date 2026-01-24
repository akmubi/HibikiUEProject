#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TngSoundProceduralMapData.generated.h"

class UAkAuxBus;

USTRUCT(BlueprintType)
struct TANGOSOUNDUTILITY_API FTngSoundProceduralMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PortalYExpand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* RoomSize1_AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* RoomSize2_AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* RoomSize3_AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* RoomSize4_AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SAVDatasFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PortalDatasFileName;
    
    FTngSoundProceduralMapData();
};

