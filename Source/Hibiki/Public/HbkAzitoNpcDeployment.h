#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkAzitoNpcDeployment.generated.h"

class AHbkTalkableCharacter;
class UAnimationAsset;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAzitoNpcDeployment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkTalkableCharacter> NpcClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* PreviewAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetHeight;
    
    FHbkAzitoNpcDeployment();
};

