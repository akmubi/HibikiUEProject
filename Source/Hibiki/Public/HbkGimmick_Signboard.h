#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmickSignboardBeginDelegate.h"
#include "HbkGimmickSignboardEndDelegate.h"
#include "HbkTalkSessionOnCueDelegate.h"
#include "HbkTipsDataRow.h"
#include "HbkGimmick_Signboard.generated.h"

class UDataTable;
class UHbkInteractTargetComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_Signboard : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickSignboardBegin OnBeginTips;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickSignboardEnd OnEndTips;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionOnCue OnNewLineTips;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TipsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComponent;
    
public:
    AHbkGimmick_Signboard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Invoke_OnNewLineTips(const FName TalkCue);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnEndTips();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnBeginTips();
    
    UFUNCTION(BlueprintCallable)
    FHbkTipsDataRow GetTipsDataRow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnNewLineTips(const FName TalkCue);
    
};

