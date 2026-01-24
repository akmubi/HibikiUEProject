#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorActivateInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UActorActivateInterface : public UInterface {
    GENERATED_BODY()
};

class IActorActivateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReturnCheckPoint(AActor* Activator, FName CPName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResumeAnim(AActor* Activator, bool Immediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPauseAnim(AActor* Activator, bool Immediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnInteract(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(AActor* Activator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateFromMacaron(AActor* Activator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivate(AActor* Activator);
    
};

