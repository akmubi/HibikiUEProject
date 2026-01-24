#pragma once
#include "CoreMinimal.h"
#include "HbkMobActorMeshKitInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkMobActorMeshKitInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hide;
    
    HIBIKI_API FHbkMobActorMeshKitInfo_t();
};

