#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDamageReactionInfo.h"
#include "HbkEnemyDamageReaction.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyDamageReaction : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDamageReactionInfo> DamageReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RefCounter;
    
public:
    UHbkEnemyDamageReaction();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

