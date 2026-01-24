#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_CheckChunk.generated.h"

class UHbkGameplayTask_CheckChunk;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_CheckChunk : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTaskCheckChunkProgressDelegate, float, Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskCheckChunkDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskCheckChunkDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskCheckChunkProgressDelegate OnProgress;
    
    UHbkGameplayTask_CheckChunk(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_CheckChunk* CheckChunkByLevelName(UObject* WorldContextObject, const FName& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_CheckChunk* CheckChunk(UObject* WorldContextObject);
    
};

