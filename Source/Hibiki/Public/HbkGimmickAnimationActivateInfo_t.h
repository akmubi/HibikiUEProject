#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationActivateParam_t.h"
#include "HbkGimmickAnimationActivateInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationActivateInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickAnimationActivateParam_t BeginBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickAnimationActivateParam_t EndBattleParam;
    
    HIBIKI_API FHbkGimmickAnimationActivateInfo_t();
};

