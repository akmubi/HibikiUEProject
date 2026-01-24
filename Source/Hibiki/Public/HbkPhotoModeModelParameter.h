#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoModeListParameter.h"
#include "HbkPhotoModeModelParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkPhotoModeModelParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameStringId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeListParameter FacialList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPhotoModeListParameter MotionList;
    
    HIBIKI_API FHbkPhotoModeModelParameter();
};

