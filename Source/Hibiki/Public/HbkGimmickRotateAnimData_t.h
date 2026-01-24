#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickRotateAnimData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickRotateAnimData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool addFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotValue;
    
    HIBIKI_API FHbkGimmickRotateAnimData_t();
};

