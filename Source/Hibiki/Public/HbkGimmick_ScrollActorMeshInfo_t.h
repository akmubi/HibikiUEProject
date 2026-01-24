#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ScrollActorMeshInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ScrollActorMeshInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshCompName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachValue;
    
    HIBIKI_API FHbkGimmick_ScrollActorMeshInfo_t();
};

