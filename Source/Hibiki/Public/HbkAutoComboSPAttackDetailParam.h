#pragma once
#include "CoreMinimal.h"
#include "HbkAutoComboSPAttackDetailParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkAutoComboSPAttackDetailParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecoverHP_Sp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInhibitExistSPObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseRateEx;
    
    HIBIKI_API FHbkAutoComboSPAttackDetailParam();
};

