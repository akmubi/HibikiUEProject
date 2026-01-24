#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BossRhythmAttackParam.generated.h"

USTRUCT(BlueprintType)
struct FBossRhythmAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnEndPlayerAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnEndBossActionAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerAttachToAttackerProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContiniousAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketPointInTheDirectionPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuccessfull;
    
    HIBIKI_API FBossRhythmAttackParam();
};

