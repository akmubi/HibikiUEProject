#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkNpcDamageReactionInfo.h"
#include "HbkNpcDamageReaction.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkNpcDamageReaction : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkNpcDamageReactionInfo> DamageReactions;
    
public:
    UHbkNpcDamageReaction();

};

