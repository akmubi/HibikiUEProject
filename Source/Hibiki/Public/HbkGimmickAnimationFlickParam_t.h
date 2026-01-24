#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationNoteParam_t.h"
#include "HbkGimmickAnimationFlickParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationFlickParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickAnimationNoteParam_t NoteParam;
    
    HIBIKI_API FHbkGimmickAnimationFlickParam_t();
};

