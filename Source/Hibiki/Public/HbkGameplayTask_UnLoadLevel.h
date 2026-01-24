#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_UnLoadLevel.generated.h"

class UHbkGameplayTask_UnLoadLevel;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_UnLoadLevel : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskUnLoadLevelDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskUnLoadLevelDelegate OnSuccess;
    
    UHbkGameplayTask_UnLoadLevel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_UnLoadLevel* RequestUnLoadLevel(UObject* WorldContextObject, const int32 Handle);
    
};

