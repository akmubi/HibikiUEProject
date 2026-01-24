#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PhotoModeCharacterMotionDetailParameter.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPhotoModeCharacterMotionDetailParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> WeaponMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttatchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraAttatchSocketName;
    
    HIBIKI_API FPhotoModeCharacterMotionDetailParameter();
};

