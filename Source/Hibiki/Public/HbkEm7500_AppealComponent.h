#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkEm7500AppealInfo.h"
#include "HbkEm7500AppealRecord.h"
#include "HbkEm7500_AppealComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEm7500_AppealComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEm7500AppealInfo> AppealInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEm7500AppealRecord> AppealRecords;
    
public:
    UHbkEm7500_AppealComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAppealInfo(const TMap<FGameplayTag, FHbkEm7500AppealInfo>& InAppealInfo);
    
    UFUNCTION(BlueprintCallable)
    bool FindActionTag(const FGameplayTag& SelectTag, FGameplayTag& OutActionTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearRecordApeal();
    
};

