#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0090.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0090 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName evMotName;
    
    AHbkGimmick_bg0090(const FObjectInitializer& ObjectInitializer);

};

