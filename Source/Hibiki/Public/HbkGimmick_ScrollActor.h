#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ScrollActorInfo_t.h"
#include "HbkGimmick_ScrollActor.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_ScrollActor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ScrollActorInfo_t ScrollInfo;
    
public:
    AHbkGimmick_ScrollActor(const FObjectInitializer& ObjectInitializer);

};

