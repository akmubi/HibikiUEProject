#pragma once
#include "CoreMinimal.h"
#include "HbkBarrierCompInitParam.h"
#include "HbkCoinBlockerCollisionInfo.h"
#include "HbkEm6000_RepulsionInfo.h"
#include "HbkShieldCompInitParam.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_BodyMeshInfo.generated.h"

class UAnimInstance;
class UHbkActionInfoAsset;
class UHbkEnemyAttackInfoAsset;
class UHbkEnemyDamageReaction;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FHbkEm6000_BodyMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAnimInstance>> AnimClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_RepulsionInfo> RepulsionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AkAttachSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MagnetPointAttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEnemyAttackInfoAsset* AttackInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkActionInfoAsset* ActionInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEnemyDamageReaction* DamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBarrierCompInitParam BarrierParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkShieldCompInitParam ShieldParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkCoinBlockerCollisionInfo> CoinBlockerCollisionInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkCoinBlockerCollisionInfo> CoinBlockerCollisionInfos2;
    
    HIBIKI_API FHbkEm6000_BodyMeshInfo();
};

