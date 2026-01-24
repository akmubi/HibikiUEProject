#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoCharaWeaponInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkPhotoCharaWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    HIBIKI_API FHbkPhotoCharaWeaponInfo();
};

