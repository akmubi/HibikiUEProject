#pragma once
#include "CoreMinimal.h"
#include "PhotoModeTableRowBase.h"
#include "PhotoModeFilterTypeRowBase.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeFilterTypeRowBase : public FPhotoModeTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameStringId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    HIBIKI_API FPhotoModeFilterTypeRowBase();
};

