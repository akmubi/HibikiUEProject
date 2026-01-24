#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkModelViewerModelActorAccessory.generated.h"

class AHbkModelViewerModelAccessory;
class UAnimationAsset;

USTRUCT(BlueprintType)
struct FHbkModelViewerModelActorAccessory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkModelViewerModelAccessory> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkModelViewerModelAccessory* Actor;
    
    HIBIKI_API FHbkModelViewerModelActorAccessory();
};

