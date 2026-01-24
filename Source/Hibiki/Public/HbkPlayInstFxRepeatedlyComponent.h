#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkNote.h"
#include "HbkInstFxRepeatedlyInfo.h"
#include "HbkSimpleInstFxInfo.h"
#include "HbkPlayInstFxRepeatedlyComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayInstFxRepeatedlyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableDebugRecorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkInstFxRepeatedlyInfo> PlayRepeatedlyInstFxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSimpleInstFxInfo> SimplePlayInstFxList;
    
public:
    UHbkPlayInstFxRepeatedlyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SimplePlayInstFxFromKey(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    bool SimplePlayInstFxFromIndex(int32 ListIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterInfoFromKey(FName KeyName, EHbkNote DelaySyncRhythm, int32 DelayNoteCount);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterInfoFromIndex(int32 ListIndex, EHbkNote DelaySyncRhythm, int32 DelayNoteCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MontageBlendingOutEvent(UAnimMontage* Montage, bool bInterrupted);
    
};

