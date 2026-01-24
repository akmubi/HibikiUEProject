#pragma once
#include "CoreMinimal.h"
#include "HbkTalkable_MeshKitInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTalkable_MeshKitInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hide;
    
    HIBIKI_API FHbkTalkable_MeshKitInfo_t();
};

