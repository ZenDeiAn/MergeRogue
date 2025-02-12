using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"Cinemachine.dll",
		"DOTween.dll",
		"FancyScrollView.dll",
		"Main.dll",
		"Newtonsoft.Json.dll",
		"RaindowStudioFramework.dll",
		"System.Core.dll",
		"System.dll",
		"Unity.ResourceManager.dll",
		"UnityEngine.CoreModule.dll",
		"UnityEngine.UI.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// DelegateList<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>>
	// DelegateList<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// DelegateList<float>
	// FancyScrollView.FancyCell<object,object>
	// FancyScrollView.FancyCell<object>
	// FancyScrollView.FancyScrollView<object,object>
	// FancyScrollView.FancyScrollView<object>
	// HotUpdateManager.<>c__DisplayClass4_0<object>
	// HotUpdateManager.<LoadAssetsByLabelIE>d__4<object>
	// Newtonsoft.Json.Linq.JEnumerable<object>
	// RaindowStudio.DesignPattern.KeyOperator<int>
	// RaindowStudio.DesignPattern.Processor.<>c<int>
	// RaindowStudio.DesignPattern.Processor.<>c<object,int>
	// RaindowStudio.DesignPattern.Processor<int>
	// RaindowStudio.DesignPattern.Processor<object,int>
	// RaindowStudio.DesignPattern.ProcessorEternal<object,int>
	// RaindowStudio.DesignPattern.SingletonUnity<object>
	// RaindowStudio.DesignPattern.SingletonUnityEternal<object>
	// RaindowStudio.Utility.EnumPairList<int,float>
	// RaindowStudio.Utility.EnumPairList<int,int>
	// RaindowStudio.Utility.EnumPairList<int,object>
	// System.Action<MapBlockProbability>
	// System.Action<MonsterGroup>
	// System.Action<MonsterProbabilityData>
	// System.Action<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,object>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Action<UnityEngine.Vector2Int,object>
	// System.Action<UnityEngine.Vector2Int>
	// System.Action<float>
	// System.Action<int,int>
	// System.Action<int>
	// System.Action<object,object,int>
	// System.Action<object,object>
	// System.Action<object>
	// System.ArraySegment.Enumerator<ushort>
	// System.ArraySegment<ushort>
	// System.ByReference<ushort>
	// System.Collections.Generic.ArraySortHelper<MapBlockProbability>
	// System.Collections.Generic.ArraySortHelper<MonsterGroup>
	// System.Collections.Generic.ArraySortHelper<MonsterProbabilityData>
	// System.Collections.Generic.ArraySortHelper<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.ArraySortHelper<UnityEngine.Vector2Int>
	// System.Collections.Generic.ArraySortHelper<float>
	// System.Collections.Generic.ArraySortHelper<int>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<MapBlockProbability>
	// System.Collections.Generic.Comparer<MonsterGroup>
	// System.Collections.Generic.Comparer<MonsterProbabilityData>
	// System.Collections.Generic.Comparer<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.Comparer<UnityEngine.Vector2Int>
	// System.Collections.Generic.Comparer<float>
	// System.Collections.Generic.Comparer<int>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.Dictionary.Enumerator<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.Dictionary.Enumerator<int,MergeSocketData>
	// System.Collections.Generic.Dictionary.Enumerator<int,int>
	// System.Collections.Generic.Dictionary.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,float>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,MergeSocketData>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,int>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,float>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.Dictionary.KeyCollection<int,MergeSocketData>
	// System.Collections.Generic.Dictionary.KeyCollection<int,int>
	// System.Collections.Generic.Dictionary.KeyCollection<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,float>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,MergeSocketData>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,int>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,float>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<int,MergeSocketData>
	// System.Collections.Generic.Dictionary.ValueCollection<int,int>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,float>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.Dictionary<int,MergeSocketData>
	// System.Collections.Generic.Dictionary<int,int>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,float>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.EqualityComparer<MergeSocketData>
	// System.Collections.Generic.EqualityComparer<UnityEngine.Vector2Int>
	// System.Collections.Generic.EqualityComparer<float>
	// System.Collections.Generic.EqualityComparer<int>
	// System.Collections.Generic.EqualityComparer<object>
	// System.Collections.Generic.HashSet.Enumerator<object>
	// System.Collections.Generic.HashSet<object>
	// System.Collections.Generic.ICollection<MapBlockProbability>
	// System.Collections.Generic.ICollection<MonsterGroup>
	// System.Collections.Generic.ICollection<MonsterProbabilityData>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,MergeSocketData>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,int>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,float>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<UnityEngine.Vector2Int>
	// System.Collections.Generic.ICollection<float>
	// System.Collections.Generic.ICollection<int>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IComparer<MapBlockProbability>
	// System.Collections.Generic.IComparer<MonsterGroup>
	// System.Collections.Generic.IComparer<MonsterProbabilityData>
	// System.Collections.Generic.IComparer<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.IComparer<UnityEngine.Vector2Int>
	// System.Collections.Generic.IComparer<float>
	// System.Collections.Generic.IComparer<int>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<MapBlockProbability>
	// System.Collections.Generic.IEnumerable<MonsterGroup>
	// System.Collections.Generic.IEnumerable<MonsterProbabilityData>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,MergeSocketData>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,int>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,float>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<UnityEngine.Vector2Int>
	// System.Collections.Generic.IEnumerable<float>
	// System.Collections.Generic.IEnumerable<int>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<MapBlockProbability>
	// System.Collections.Generic.IEnumerator<MonsterGroup>
	// System.Collections.Generic.IEnumerator<MonsterProbabilityData>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,MergeSocketData>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,int>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,float>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<UnityEngine.Vector2Int>
	// System.Collections.Generic.IEnumerator<float>
	// System.Collections.Generic.IEnumerator<int>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEqualityComparer<UnityEngine.Vector2Int>
	// System.Collections.Generic.IEqualityComparer<int>
	// System.Collections.Generic.IEqualityComparer<object>
	// System.Collections.Generic.IList<MapBlockProbability>
	// System.Collections.Generic.IList<MonsterGroup>
	// System.Collections.Generic.IList<MonsterProbabilityData>
	// System.Collections.Generic.IList<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.IList<UnityEngine.Vector2Int>
	// System.Collections.Generic.IList<float>
	// System.Collections.Generic.IList<int>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>
	// System.Collections.Generic.KeyValuePair<int,MergeSocketData>
	// System.Collections.Generic.KeyValuePair<int,int>
	// System.Collections.Generic.KeyValuePair<int,object>
	// System.Collections.Generic.KeyValuePair<object,float>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.LinkedList.Enumerator<object>
	// System.Collections.Generic.LinkedList<object>
	// System.Collections.Generic.LinkedListNode<object>
	// System.Collections.Generic.List.Enumerator<MapBlockProbability>
	// System.Collections.Generic.List.Enumerator<MonsterGroup>
	// System.Collections.Generic.List.Enumerator<MonsterProbabilityData>
	// System.Collections.Generic.List.Enumerator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.List.Enumerator<UnityEngine.Vector2Int>
	// System.Collections.Generic.List.Enumerator<float>
	// System.Collections.Generic.List.Enumerator<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<MapBlockProbability>
	// System.Collections.Generic.List<MonsterGroup>
	// System.Collections.Generic.List<MonsterProbabilityData>
	// System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.List<UnityEngine.Vector2Int>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<MapBlockProbability>
	// System.Collections.Generic.ObjectComparer<MonsterGroup>
	// System.Collections.Generic.ObjectComparer<MonsterProbabilityData>
	// System.Collections.Generic.ObjectComparer<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.Generic.ObjectComparer<UnityEngine.Vector2Int>
	// System.Collections.Generic.ObjectComparer<float>
	// System.Collections.Generic.ObjectComparer<int>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<MergeSocketData>
	// System.Collections.Generic.ObjectEqualityComparer<UnityEngine.Vector2Int>
	// System.Collections.Generic.ObjectEqualityComparer<float>
	// System.Collections.Generic.ObjectEqualityComparer<int>
	// System.Collections.Generic.ObjectEqualityComparer<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<MapBlockProbability>
	// System.Collections.ObjectModel.ReadOnlyCollection<MonsterGroup>
	// System.Collections.ObjectModel.ReadOnlyCollection<MonsterProbabilityData>
	// System.Collections.ObjectModel.ReadOnlyCollection<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Collections.ObjectModel.ReadOnlyCollection<UnityEngine.Vector2Int>
	// System.Collections.ObjectModel.ReadOnlyCollection<float>
	// System.Collections.ObjectModel.ReadOnlyCollection<int>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<MapBlockProbability>
	// System.Comparison<MonsterGroup>
	// System.Comparison<MonsterProbabilityData>
	// System.Comparison<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Comparison<UnityEngine.Vector2Int>
	// System.Comparison<float>
	// System.Comparison<int>
	// System.Comparison<object>
	// System.Func<MapBlockProbability,MapBlockProbability>
	// System.Func<MapBlockProbability,byte>
	// System.Func<MapBlockProbability,int>
	// System.Func<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,byte>
	// System.Func<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>
	// System.Func<UnityEngine.Vector2Int,byte>
	// System.Func<UnityEngine.Vector2Int,object>
	// System.Func<int,byte>
	// System.Func<int,object>
	// System.Func<object,MapBlockProbability>
	// System.Func<object,byte>
	// System.Func<object,object,object>
	// System.Func<object,object>
	// System.Func<object>
	// System.Func<ushort,byte>
	// System.IEquatable<MergeSocketData>
	// System.Linq.Buffer<MapBlockProbability>
	// System.Linq.Buffer<object>
	// System.Linq.Enumerable.<CastIterator>d__99<int>
	// System.Linq.Enumerable.Iterator<MapBlockProbability>
	// System.Linq.Enumerable.Iterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Linq.Enumerable.Iterator<UnityEngine.Vector2Int>
	// System.Linq.Enumerable.Iterator<int>
	// System.Linq.Enumerable.Iterator<object>
	// System.Linq.Enumerable.WhereArrayIterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Linq.Enumerable.WhereEnumerableIterator<MapBlockProbability>
	// System.Linq.Enumerable.WhereEnumerableIterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Linq.Enumerable.WhereEnumerableIterator<object>
	// System.Linq.Enumerable.WhereListIterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Linq.Enumerable.WhereSelectArrayIterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>
	// System.Linq.Enumerable.WhereSelectArrayIterator<UnityEngine.Vector2Int,object>
	// System.Linq.Enumerable.WhereSelectArrayIterator<int,object>
	// System.Linq.Enumerable.WhereSelectArrayIterator<object,MapBlockProbability>
	// System.Linq.Enumerable.WhereSelectEnumerableIterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>
	// System.Linq.Enumerable.WhereSelectEnumerableIterator<UnityEngine.Vector2Int,object>
	// System.Linq.Enumerable.WhereSelectEnumerableIterator<int,object>
	// System.Linq.Enumerable.WhereSelectEnumerableIterator<object,MapBlockProbability>
	// System.Linq.Enumerable.WhereSelectListIterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>
	// System.Linq.Enumerable.WhereSelectListIterator<UnityEngine.Vector2Int,object>
	// System.Linq.Enumerable.WhereSelectListIterator<int,object>
	// System.Linq.Enumerable.WhereSelectListIterator<object,MapBlockProbability>
	// System.Linq.EnumerableSorter<MapBlockProbability,int>
	// System.Linq.EnumerableSorter<MapBlockProbability>
	// System.Linq.GroupedEnumerable<MapBlockProbability,int,MapBlockProbability>
	// System.Linq.IdentityFunction.<>c<MapBlockProbability>
	// System.Linq.IdentityFunction<MapBlockProbability>
	// System.Linq.Lookup.<GetEnumerator>d__12<int,MapBlockProbability>
	// System.Linq.Lookup.Grouping.<GetEnumerator>d__7<int,MapBlockProbability>
	// System.Linq.Lookup.Grouping<int,MapBlockProbability>
	// System.Linq.Lookup<int,MapBlockProbability>
	// System.Linq.OrderedEnumerable.<GetEnumerator>d__1<MapBlockProbability>
	// System.Linq.OrderedEnumerable<MapBlockProbability,int>
	// System.Linq.OrderedEnumerable<MapBlockProbability>
	// System.Predicate<MapBlockProbability>
	// System.Predicate<MonsterGroup>
	// System.Predicate<MonsterProbabilityData>
	// System.Predicate<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>
	// System.Predicate<UnityEngine.Vector2Int>
	// System.Predicate<float>
	// System.Predicate<int>
	// System.Predicate<object>
	// System.ReadOnlySpan.Enumerator<ushort>
	// System.ReadOnlySpan<ushort>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<object>
	// System.Runtime.CompilerServices.TaskAwaiter<object>
	// System.Span.Enumerator<ushort>
	// System.Span<ushort>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<object>
	// System.Threading.Tasks.Task<object>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<object>
	// System.Threading.Tasks.TaskFactory<object>
	// UnityEngine.EventSystems.ExecuteEvents.EventFunction<object>
	// UnityEngine.Pool.CollectionPool.<>c<object,object>
	// UnityEngine.Pool.CollectionPool<object,object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase.<>c__DisplayClass60_0<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase.<>c__DisplayClass61_0<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>
	// UnityEngine.ResourceManagement.Util.GlobalLinkedListNodeCache<object>
	// UnityEngine.ResourceManagement.Util.LinkedListNodeCache<object>
	// }}

	public void RefMethods()
	{
		// object Cinemachine.CinemachineVirtualCamera.GetCinemachineComponent<object>()
		// object DG.Tweening.TweenSettingsExtensions.OnComplete<object>(object,DG.Tweening.TweenCallback)
		// object DG.Tweening.TweenSettingsExtensions.SetDelay<object>(object,float)
		// object DG.Tweening.TweenSettingsExtensions.SetEase<object>(object,DG.Tweening.Ease)
		// object DG.Tweening.TweenSettingsExtensions.SetLoops<object>(object,int,DG.Tweening.LoopType)
		// object DG.Tweening.TweenSettingsExtensions.SetRelative<object>(object)
		// object DG.Tweening.TweenSettingsExtensions.SetRelative<object>(object,bool)
		// UnityEngine.Coroutine HotUpdateManager.LoadAssetsByLabel<object>(string,System.Action<object>,System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
		// System.Collections.IEnumerator HotUpdateManager.LoadAssetsByLabelIE<object>(string,System.Action<object>,System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
		// object Newtonsoft.Json.JsonConvert.DeserializeObject<object>(string)
		// object Newtonsoft.Json.JsonConvert.DeserializeObject<object>(string,Newtonsoft.Json.JsonSerializerSettings)
		// object Newtonsoft.Json.Linq.JToken.ToObject<object>()
		// bool System.Enum.TryParse<int>(string,bool,int&)
		// bool System.Enum.TryParse<int>(string,int&)
		// int System.HashCode.Combine<int,object,int>(int,object,int)
		// System.Collections.Generic.IEnumerable<int> System.Linq.Enumerable.Cast<int>(System.Collections.IEnumerable)
		// System.Collections.Generic.IEnumerable<int> System.Linq.Enumerable.CastIterator<int>(System.Collections.IEnumerable)
		// bool System.Linq.Enumerable.Contains<int>(System.Collections.Generic.IEnumerable<int>,int)
		// bool System.Linq.Enumerable.Contains<int>(System.Collections.Generic.IEnumerable<int>,int,System.Collections.Generic.IEqualityComparer<int>)
		// int System.Linq.Enumerable.Count<object>(System.Collections.Generic.IEnumerable<object>)
		// MapBlockProbability System.Linq.Enumerable.First<MapBlockProbability>(System.Collections.Generic.IEnumerable<MapBlockProbability>)
		// System.Collections.Generic.IEnumerable<System.Linq.IGrouping<int,MapBlockProbability>> System.Linq.Enumerable.GroupBy<MapBlockProbability,int>(System.Collections.Generic.IEnumerable<MapBlockProbability>,System.Func<MapBlockProbability,int>)
		// System.Linq.IOrderedEnumerable<MapBlockProbability> System.Linq.Enumerable.OrderBy<MapBlockProbability,int>(System.Collections.Generic.IEnumerable<MapBlockProbability>,System.Func<MapBlockProbability,int>)
		// System.Collections.Generic.IEnumerable<MapBlockProbability> System.Linq.Enumerable.Select<object,MapBlockProbability>(System.Collections.Generic.IEnumerable<object>,System.Func<object,MapBlockProbability>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>(System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>,System.Func<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<UnityEngine.Vector2Int,object>(System.Collections.Generic.IEnumerable<UnityEngine.Vector2Int>,System.Func<UnityEngine.Vector2Int,object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<int,object>(System.Collections.Generic.IEnumerable<int>,System.Func<int,object>)
		// object[] System.Linq.Enumerable.ToArray<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.List<MapBlockProbability> System.Linq.Enumerable.ToList<MapBlockProbability>(System.Collections.Generic.IEnumerable<MapBlockProbability>)
		// System.Collections.Generic.List<float> System.Linq.Enumerable.ToList<float>(System.Collections.Generic.IEnumerable<float>)
		// System.Collections.Generic.List<int> System.Linq.Enumerable.ToList<int>(System.Collections.Generic.IEnumerable<int>)
		// System.Collections.Generic.List<object> System.Linq.Enumerable.ToList<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>> System.Linq.Enumerable.Where<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>(System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>,System.Func<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,bool>)
		// System.Collections.Generic.IEnumerable<MapBlockProbability> System.Linq.Enumerable.Iterator<object>.Select<MapBlockProbability>(System.Func<object,MapBlockProbability>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Iterator<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>>.Select<object>(System.Func<System.Collections.Generic.KeyValuePair<UnityEngine.Vector2Int,object>,object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Iterator<UnityEngine.Vector2Int>.Select<object>(System.Func<UnityEngine.Vector2Int,object>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Iterator<int>.Select<object>(System.Func<int,object>)
		// object& System.Runtime.CompilerServices.Unsafe.As<object,object>(object&)
		// System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<object>(object&)
		// object UnityEngine.Component.GetComponent<object>()
		// bool UnityEngine.Component.TryGetComponent<object>(object&)
		// bool UnityEngine.EventSystems.ExecuteEvents.Execute<object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents.EventFunction<object>)
		// System.Void UnityEngine.EventSystems.ExecuteEvents.GetEventList<object>(UnityEngine.GameObject,System.Collections.Generic.IList<UnityEngine.EventSystems.IEventSystemHandler>)
		// bool UnityEngine.EventSystems.ExecuteEvents.ShouldSendToComponent<object>(UnityEngine.Component)
		// object UnityEngine.GameObject.GetComponent<object>()
		// System.Void UnityEngine.GameObject.GetComponents<object>(System.Collections.Generic.List<object>)
		// bool UnityEngine.GameObject.TryGetComponent<object>(object&)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform,bool)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
	}
}