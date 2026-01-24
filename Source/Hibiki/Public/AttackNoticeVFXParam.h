#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeVFXParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FAttackNoticeVFXParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> NoticeVFXDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pNoticeVFXDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NoticeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLit;
    
    HIBIKI_API FAttackNoticeVFXParam();
};

