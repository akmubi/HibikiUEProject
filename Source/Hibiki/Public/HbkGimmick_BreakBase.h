#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkDamageInterface.h"
#include "HbkGimmickBreakBase_ReadyDelegateDelegate.h"
#include "HbkGimmick_BreakBase_GimmickSoundInfo_t.h"
#include "HbkGimmick_BreakBase_SoundInfo_t.h"
#include "HbkGimmick_BreakBase_VfxInfo_t.h"
#include "HbkMultiItemTickets.h"
#include "HbkGimmick_BreakBase.generated.h"

class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_BreakBase : public AActor, public IActorActivateInterface, public IHbkDamageInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkGimmickBreakBase_ReturnCheckPointDelegate, AActor*, Activator, FName, CPName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBreakBase_DectivateDelegate, AActor*, Activator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmickBreakBase_BreakDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBreakBase_ActivateDelegate, AActor*, Activator);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBreakBase_BreakDelegate OnBreakEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBreakBase_ActivateDelegate OnActivateBreak;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBreakBase_DectivateDelegate OnDeactivateBreak;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBreakBase_ReturnCheckPointDelegate OnReturnCheckPointBreak;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBreakBase_ReadyDelegate OnReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets BreakItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BreakBase_SoundInfo_t BreakSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BreakBase_GimmickSoundInfo_t> GimmickSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BreakBase_VfxInfo_t BreakVfxInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveDestroyGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool significanceDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float significanceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minTickInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkGimmick_BreakBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPartnerIconEnabled(bool Flag);
    
private:
    UFUNCTION(BlueprintCallable)
    void CommonResourceLoadEnd();
    

    // Fix for true pure virtual functions not being implemented
};

