#pragma once
#include "CoreMinimal.h"
#include "HbkMeshKitStateKeyData.generated.h"

USTRUCT(BlueprintType)
struct FHbkMeshKitStateKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShowMeshKits;
    
    HIBIKI_API FHbkMeshKitStateKeyData();
};

