#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkTalkEventEditorActorParam.generated.h"

class AActor;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventEditorActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetHeight;
    
    FHbkTalkEventEditorActorParam();
};

