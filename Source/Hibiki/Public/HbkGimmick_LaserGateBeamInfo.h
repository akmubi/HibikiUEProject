#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_LaserGateBeamInfo.generated.h"

class UHbkSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_LaserGateBeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* JointMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BeamEndPoint;
    
    HIBIKI_API FHbkGimmick_LaserGateBeamInfo();
};

