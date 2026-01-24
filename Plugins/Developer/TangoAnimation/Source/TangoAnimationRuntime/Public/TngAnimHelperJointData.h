#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TngAnimHelperJointSetting.h"
#include "TngAnimHelperJointData.generated.h"

UCLASS(Blueprintable)
class TANGOANIMATIONRUNTIME_API UTngAnimHelperJointData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTngAnimHelperJointSetting> Settings;
    
    UTngAnimHelperJointData();

};

