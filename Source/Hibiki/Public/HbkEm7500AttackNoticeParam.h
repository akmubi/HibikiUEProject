#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeReactionParam.h"
#include "BossRhythmAttackParam.h"
#include "HbkEm7500AttackNoticeParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500AttackNoticeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NoteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeReactionParam ReactionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossRhythmAttackParam RhythmAttackParam;
    
    HIBIKI_API FHbkEm7500AttackNoticeParam();
};

