#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorActivateInterface.h"
#include "EHbkItemContactMode.h"
#include "HbkItemBase.h"
#include "HbkPlaceableItem.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlaceableItem : public AHbkItemBase, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Scale3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactiveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkItemContactMode ContactMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAsGlobalItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PlcItemState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ContactReactionSound;
    
public:
    AHbkPlaceableItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInteractItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDestroyItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDeactivateItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnActivateItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableGameFlag();
    

    // Fix for true pure virtual functions not being implemented
};

