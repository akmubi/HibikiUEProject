#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableStageActor.h"
#include "HbkTalkableTalkData_t.h"
#include "HbkTalkableSt04_Np0300.generated.h"

class AActor;

UCLASS(Blueprintable)
class AHbkTalkableSt04_Np0300 : public AHbkTalkableStageActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTalkableSt04_Np0300_BeginTKEV);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableSt04_Np0300_BeginTKEV OnBeginTKEV;
    
public:
    AHbkTalkableSt04_Np0300(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResumeEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction_St04Np0300(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginTalk_St04Np0300(AActor* Talker, const FHbkTalkableTalkData_t& l_TalkData);
    
};

