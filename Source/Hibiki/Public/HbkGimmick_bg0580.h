#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0580.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg0580 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFall;
    
public:
    AHbkGimmick_bg0580(const FObjectInitializer& ObjectInitializer);

};

