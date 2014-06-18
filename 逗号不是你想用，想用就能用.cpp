ui calcmask()
{
	ui mask = 0U;
	int i;
	For(i, 4) mask |= (And[i] ^ Or[i]) << ((3 - i) << 3);
	for (ui Tmp = mask, mask = -1; Tmp; Tmp >>= 1) mask &= ~Tmp; /// 这相当于内部定义了mask...
	return mask;
}


/// 正确的做法是遵循ANSI C标准...
