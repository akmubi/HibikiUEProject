#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerType.h"
#include "HbkEm7500AdjustmentParam.h"
#include "HbkEm7500AppealInfo.h"
#include "HbkEm7500ArmParam.h"
#include "HbkEm7500CheckDistanceInfo.h"
#include "HbkEm7500CircleFireGroupParam.h"
#include "HbkEm7500EnergySwordGazerParam.h"
#include "HbkEm7500EnergyWallStartingPointList.h"
#include "HbkEm7500FloatingLaserInfo.h"
#include "HbkEm7500ThunderOriginParam.h"
#include "HbkToughCompInitParam.h"
#include "HbkEm7500PhaseParameter.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500PhaseParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkToughCompInitParam ToughInitParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CheckDistanceInfo> CheckDistanceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CircleFireGroupParam> HelmDivideSlashAlphaFireGroupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergySwordGazerParam> EnergySwordGazerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CircleFireGroupParam> EnergySwordGazerFireGroupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, float> PartnerReactionIntervalParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500FloatingLaserInfo DefaultFloatingLaserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEm7500FloatingLaserInfo> FloatingLaserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEm7500ThunderOriginParam> ThunderOriginParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergyWallStartingPointList> StartingPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEm7500AppealInfo> AppealInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500ArmParam ArmParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500AdjustmentParam AdjustmentParameter;
    
    FHbkEm7500PhaseParameter();
};

