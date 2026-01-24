#pragma once
#include "CoreMinimal.h"
#include "AttackNoticeReactionParam.h"
#include "BossRhythmAttackParam.h"
#include "HbkEm5000AttackNoticeParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000AttackNoticeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NoteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeReactionParam ReactionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossRhythmAttackParam RhythmAttackParam;
    
    HIBIKI_API FHbkEm5000AttackNoticeParam();
};

