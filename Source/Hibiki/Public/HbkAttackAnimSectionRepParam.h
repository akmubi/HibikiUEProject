#pragma once
#include "CoreMinimal.h"
#include "HbkAttackAnimSectionRepParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAttackAnimSectionRepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJumpToSection;
    
    FHbkAttackAnimSectionRepParam();
};

