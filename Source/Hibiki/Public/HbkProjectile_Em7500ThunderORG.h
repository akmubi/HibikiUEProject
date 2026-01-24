#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHbkEm7500ThunderOriginProcess.h"
#include "HbkEm7500ThunderOriginParam.h"
#include "HbkEm7500ThunderOriginWorkParamCircle.h"
#include "HbkEm7500ThunderOriginWorkParamLinear.h"
#include "HbkProjectileWithoutMesh.h"
#include "HbkProjectile_Em7500ThunderORG.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectile_Em7500ThunderORG : public AHbkProjectileWithoutMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500ThunderOriginProcess Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaunchNameForThunder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OriginParamNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CheckTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500ThunderOriginParam OriginParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500ThunderOriginWorkParamLinear> OriginLinearParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500ThunderOriginWorkParamCircle> OriginCircleParams;
    
public:
    AHbkProjectile_Em7500ThunderORG(const FObjectInitializer& ObjectInitializer);

};

