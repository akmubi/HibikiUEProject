#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm4000IdleType.h"
#include "HbkAnimNotify_KorsicaChangeIdle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_KorsicaChangeIdle : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm4000IdleType Type;
    
    UHbkAnimNotify_KorsicaChangeIdle();

};

